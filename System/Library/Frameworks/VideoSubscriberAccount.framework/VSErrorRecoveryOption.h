/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSErrorRecoveryOption : NSObject {

	BOOL _destructive;
	NSString* _localizedAlertButtonTitle;
	/*^block*/id _attemptHandler;

}

@property (nonatomic,copy) NSString * localizedAlertButtonTitle;                 //@synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id attemptHandler;                                    //@synthesize attemptHandler=_attemptHandler - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(id)attemptHandler;
-(NSString *)localizedAlertButtonTitle;
-(void)setLocalizedAlertButtonTitle:(NSString *)arg1 ;
-(void)setAttemptHandler:(id)arg1 ;
@end

