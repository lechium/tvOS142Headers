/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface BLPurchaseResponseItem : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isPurchaseRedownload;
	NSDictionary* _item;
	NSString* _downloadID;
	NSDictionary* _metadata;
	NSString* _purchaseParameters;

}

@property (nonatomic,copy) NSDictionary * item;                        //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * purchaseParameters;              //@synthesize purchaseParameters=_purchaseParameters - In the implementation block
@property (assign,nonatomic) BOOL isPurchaseRedownload;                //@synthesize isPurchaseRedownload=_isPurchaseRedownload - In the implementation block
@property (nonatomic,copy) NSString * downloadID;                      //@synthesize downloadID=_downloadID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setItem:(NSDictionary *)arg1 ;
-(NSDictionary *)item;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)downloadID;
-(void)setDownloadID:(NSString *)arg1 ;
-(NSString *)purchaseParameters;
-(BOOL)isPurchaseRedownload;
-(void)setPurchaseParameters:(NSString *)arg1 ;
-(void)setIsPurchaseRedownload:(BOOL)arg1 ;
@end

