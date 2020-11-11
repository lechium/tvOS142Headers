/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface EARAudioReader : NSObject {

	NSURL* _fileURL;
	unsigned long long _sampleRate;

}
-(id)_opx_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_avf_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_opx_enumeratePacketsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 sampleRate:(unsigned long long)arg2 ;
-(id)enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
@end

