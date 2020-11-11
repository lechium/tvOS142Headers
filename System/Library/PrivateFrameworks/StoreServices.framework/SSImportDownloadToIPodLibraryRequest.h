/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSRequest.h>

@class SSDownloadMetadata, SSPurchaseResponse;

@interface SSImportDownloadToIPodLibraryRequest : SSRequest {

	SSDownloadMetadata* _downloadMetadata;
	SSPurchaseResponse* _purchaseResponse;

}

@property (nonatomic,readonly) SSDownloadMetadata * downloadMetadata;              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (nonatomic,readonly) SSPurchaseResponse * purchaseResponse;              //@synthesize purchaseResponse=_purchaseResponse - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithDownloadMetadata:(id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(SSDownloadMetadata *)downloadMetadata;
-(id)initWithPurchase:(id)arg1 ;
-(SSPurchaseResponse *)purchaseResponse;
@end

