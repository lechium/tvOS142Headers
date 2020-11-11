/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLPrefetchResourceIdentifier : NSObject <NSCopying> {

	unsigned _version;
	NSString* _assetUuid;
	unsigned long long _cplType;

}

@property (nonatomic,readonly) NSString * assetUuid;                    //@synthesize assetUuid=_assetUuid - In the implementation block
@property (nonatomic,readonly) unsigned version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long cplType;              //@synthesize cplType=_cplType - In the implementation block
+(id)resourceDescriptionWithAssetUuid:(id)arg1 resourceVersion:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(unsigned long long)cplType;
-(NSString *)assetUuid;
-(id)initWithAssetUuid:(id)arg1 version:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
@end

