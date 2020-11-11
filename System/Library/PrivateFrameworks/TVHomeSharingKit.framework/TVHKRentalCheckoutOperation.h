/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKRentalOperation.h>

@class NSOperation, TVHKAsynchronousWorkToken;

@interface TVHKRentalCheckoutOperation : TVHKRentalOperation {

	NSOperation* _currentMediaServerOperation;
	TVHKAsynchronousWorkToken* _checkoutWorkToken;

}

@property (nonatomic,retain) NSOperation * currentMediaServerOperation;                  //@synthesize currentMediaServerOperation=_currentMediaServerOperation - In the implementation block
@property (nonatomic,retain) TVHKAsynchronousWorkToken * checkoutWorkToken;              //@synthesize checkoutWorkToken=_checkoutWorkToken - In the implementation block
-(void)cancel;
-(void)executionDidBegin;
-(void)_startMediaServerCheckoutOperation;
-(void)_startMediaServerCheckinOperation;
-(NSOperation *)currentMediaServerOperation;
-(TVHKAsynchronousWorkToken *)checkoutWorkToken;
-(void)setCheckoutWorkToken:(TVHKAsynchronousWorkToken *)arg1 ;
-(void)_startStoreCheckout;
-(void)setCurrentMediaServerOperation:(NSOperation *)arg1 ;
@end

