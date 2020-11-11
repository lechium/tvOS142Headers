/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MPModelGenericObject, MPCPlayerSessionResponse, NSIndexPath;

@interface MPCPlayerSessionResponseItem : NSObject {

	NSString* _contentItemIdentifier;
	MPModelGenericObject* _metadataObject;
	MPCPlayerSessionResponse* _response;
	NSIndexPath* _indexPath;

}

@property (nonatomic,__weak,readonly) MPCPlayerSessionResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                 //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * contentItemIdentifier;                        //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;                   //@synthesize metadataObject=_metadataObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(MPCPlayerSessionResponse *)response;
-(id)remove;
-(NSIndexPath *)indexPath;
-(id)play;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(MPModelGenericObject *)metadataObject;
-(NSString *)contentItemIdentifier;
-(id)playOnPlayerPath:(id)arg1 ;
@end
