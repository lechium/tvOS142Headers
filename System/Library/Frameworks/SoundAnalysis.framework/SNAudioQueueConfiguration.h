/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SNAudioQueueConfiguration : NSObject {

	unsigned _creationFlags;
	/*^block*/id _configureAudioQueue;

}

@property (assign) unsigned creationFlags;              //@synthesize creationFlags=_creationFlags - In the implementation block
@property (copy) id configureAudioQueue;                //@synthesize configureAudioQueue=_configureAudioQueue - In the implementation block
-(unsigned)creationFlags;
-(void)setCreationFlags:(unsigned)arg1 ;
-(id)configureAudioQueue;
-(void)setConfigureAudioQueue:(id)arg1 ;
@end

