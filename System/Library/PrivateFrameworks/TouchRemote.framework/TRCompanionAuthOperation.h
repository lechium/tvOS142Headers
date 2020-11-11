/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet;

@interface TRCompanionAuthOperation : TROperation {

	ACAccount* _account;
	NSSet* _targetedServices;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedServices;              //@synthesize targetedServices=_targetedServices - In the implementation block
-(void)execute;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(NSSet *)targetedServices;
@end

