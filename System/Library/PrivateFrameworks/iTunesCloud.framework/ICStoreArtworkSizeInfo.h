/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject {

	BOOL _hasMaxSupportedSize;
	long long _type;
	NSArray* _supportedSizes;
	CGSize _maxSupportedSize;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * supportedSizes;                //@synthesize supportedSizes=_supportedSizes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxSupportedSize;              //@synthesize hasMaxSupportedSize=_hasMaxSupportedSize - In the implementation block
@property (assign,nonatomic) CGSize maxSupportedSize;               //@synthesize maxSupportedSize=_maxSupportedSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(CGSize)maxSupportedSize;
-(NSArray *)supportedSizes;
-(BOOL)hasMaxSupportedSize;
-(void)setSupportedSizes:(NSArray *)arg1 ;
-(void)setHasMaxSupportedSize:(BOOL)arg1 ;
-(void)setMaxSupportedSize:(CGSize)arg1 ;
@end

