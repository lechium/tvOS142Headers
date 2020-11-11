/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPGetVisibilityRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSString* _productId;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * productId;              //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(void)setBundleId:(NSString *)arg1 ;
-(void)_start;
-(NSString *)bundleId;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setProductId:(NSString *)arg1 ;
-(NSString *)productId;
-(void)_handleReply:(id)arg1 ;
-(id)initWithProductId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithProductId:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

