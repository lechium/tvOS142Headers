/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@interface VSSpeechEngineVoiceResource : NSObject {

	shared_ptr<SiriTTS::VoiceResource>* _resource;

}

@property (assign) shared_ptr<SiriTTS::VoiceResource>* resource;              //@synthesize resource=_resource - In the implementation block
-(shared_ptr<SiriTTS::VoiceResource>*)resource;
-(void)setResource:(shared_ptr<SiriTTS::VoiceResource>*)arg1 ;
@end
