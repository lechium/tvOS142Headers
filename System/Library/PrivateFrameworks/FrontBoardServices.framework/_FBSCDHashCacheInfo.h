/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface _FBSCDHashCacheInfo : NSObject {

	unsigned _cachedCodeDirectoryHashType;
	NSData* _cachedCodeDirectoryHash;

}

@property (nonatomic,readonly) NSData * cachedCodeDirectoryHash;                  //@synthesize cachedCodeDirectoryHash=_cachedCodeDirectoryHash - In the implementation block
@property (nonatomic,readonly) unsigned cachedCodeDirectoryHashType;              //@synthesize cachedCodeDirectoryHashType=_cachedCodeDirectoryHashType - In the implementation block
+(id)cacheInfoWithData:(id)arg1 hashType:(unsigned)arg2 ;
-(NSData *)cachedCodeDirectoryHash;
-(unsigned)cachedCodeDirectoryHashType;
@end
