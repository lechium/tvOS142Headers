/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResponse.h>

@class NSURL;

@interface PlayVideoIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                 //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSURL * urlToLaunch; 
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end
