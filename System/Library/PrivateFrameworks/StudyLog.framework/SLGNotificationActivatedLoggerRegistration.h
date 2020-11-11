/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SLGNotificationActivatedLoggerRegistration : NSObject {

	int _beginToken;
	int _endToken;

}

@property (assign,nonatomic) int beginToken;              //@synthesize beginToken=_beginToken - In the implementation block
@property (assign,nonatomic) int endToken;                //@synthesize endToken=_endToken - In the implementation block
+(id)registrationWithBeginToken:(int)arg1 endToken:(int)arg2 ;
-(int)beginToken;
-(int)endToken;
-(void)setBeginToken:(int)arg1 ;
-(void)setEndToken:(int)arg1 ;
@end

