/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardServices/SBSLockScreenContentAssertion.h>

@class SBSLockScreenContentAssertion;

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion {

	SBSLockScreenContentAssertion* _actualAssertion;

}

@property (nonatomic,retain) SBSLockScreenContentAssertion * actualAssertion;              //@synthesize actualAssertion=_actualAssertion - In the implementation block
+(id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(/*^block*/id)arg2 ;
+(id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 supportedOrientations:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)_supportsReacquisition;
-(SBSLockScreenContentAssertion *)actualAssertion;
-(void)setActualAssertion:(SBSLockScreenContentAssertion *)arg1 ;
@end

