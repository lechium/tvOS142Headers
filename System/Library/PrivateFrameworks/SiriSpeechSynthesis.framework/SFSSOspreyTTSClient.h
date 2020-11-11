/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Osprey/OspreyChannel.h>

@class NSString;

@interface SFSSOspreyTTSClient : OspreyChannel {

	NSString* _deviceId;

}

@property (nonatomic,retain) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)prewarm;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)streamTTS:(id)arg1 beginHandler:(/*^block*/id)arg2 chunkHandler:(/*^block*/id)arg3 endHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
@end
