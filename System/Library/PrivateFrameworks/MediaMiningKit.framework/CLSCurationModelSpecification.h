/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSCurationModelSpecification : NSObject <NSCopying> {

	unsigned long long _curationModelVersion;
	unsigned long long _sceneAnalysisVersion;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceAnalysisVersion;

}

@property (readonly) unsigned long long curationModelVersion;              //@synthesize curationModelVersion=_curationModelVersion - In the implementation block
@property (readonly) unsigned long long sceneAnalysisVersion;              //@synthesize sceneAnalysisVersion=_sceneAnalysisVersion - In the implementation block
@property (readonly) unsigned long long mediaAnalysisVersion;              //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (readonly) unsigned long long faceAnalysisVersion;               //@synthesize faceAnalysisVersion=_faceAnalysisVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)sceneAnalysisVersion;
-(unsigned long long)mediaAnalysisVersion;
-(unsigned long long)faceAnalysisVersion;
-(id)initWithAsset:(id)arg1 curationModelVersion:(unsigned long long)arg2 ;
-(id)initWithItemInfo:(id)arg1 options:(id)arg2 ;
-(unsigned long long)curationModelVersion;
-(id)initWithCurationModelVersion:(unsigned long long)arg1 sceneAnalysisVersion:(unsigned long long)arg2 mediaAnalysisVersion:(unsigned long long)arg3 faceAnalysisVersion:(unsigned long long)arg4 ;
@end

