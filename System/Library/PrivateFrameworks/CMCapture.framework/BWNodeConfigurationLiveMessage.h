/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWNodeMessage.h>

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {

	long long _configurationID;
	BWFormat* _updatedFormat;

}

@property (readonly) long long configurationID; 
@property (readonly) BWFormat * updatedFormat; 
+(id)newMessageWithConfigurationID:(long long)arg1 ;
+(id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
-(void)dealloc;
-(long long)configurationID;
-(BWFormat *)updatedFormat;
-(id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
@end

