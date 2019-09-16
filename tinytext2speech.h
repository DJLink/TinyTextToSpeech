#ifndef TINY_TEXT_2_SPEECH_H
#define TINY_TEXT_2_SPEECH_H

#if defined(_WIN32)
#define TT2S_USING_WNDOWS
#endif

#include <sapi.h>

namespace ttspeech
{
	class Speaker
	{
	public:
		Speaker()
		{
			if (FAILED(CoInitialize(nullptr)))
			{
				printf("Error to initialize COM");
			}

			const HRESULT hr = CoCreateInstance(CLSID_SpVoice, nullptr, CLSCTX_ALL, IID_ISpVoice, (void**)& _voice);
			if (FAILED(hr))
			{
				printf("Error to CoCreateInstance ISpVoice");
			}

			_initialized = SUCCEEDED(hr);
		}

		~Speaker()
		{
			if (_voice)
			{
				_voice->Release();
			}
			::CoUninitialize();
		}

	public:
		void speak(const std::string& text)
		{
			if (!_initialized || text.empty())
			{
				return;
			}

			ULONG stream_number;
			const HRESULT hr = _voice->Speak(string2ws(text).c_str(), SPF_IS_NOT_XML | SPF_ASYNC | SPF_PURGEBEFORESPEAK, &stream_number);
			if (FAILED(hr))
			{

			}
		}

#if defined(TT2S_USING_WNDOWS)
	private:
		static std::wstring string2ws(const std::string& s)
		{
			const int slength = (int)s.length() + 1;
			const int len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
			wchar_t* buf = static_cast<wchar_t*>(malloc(sizeof(wchar_t) * len));
			MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
			std::wstring r(buf);
			free(buf);
			return r;
		}
#endif

	private:
		ISpVoice* _voice = nullptr;
		bool _initialized = false;
	};
}


#endif