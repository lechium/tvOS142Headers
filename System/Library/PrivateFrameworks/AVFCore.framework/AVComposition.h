/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying> {

	AVCompositionInternal* _priv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,copy,readonly) NSDictionary * URLAssetInitializationOptions; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)expectsPropertyRevisedNotifications;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)tracks;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(CGSize)naturalSize;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)_mediaSelectionGroupDictionaries;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(NSDictionary *)URLAssetInitializationOptions;
-(int)_createEmptyMutableCompositionIfNeeded;
-(id)_initWithComposition:(id)arg1 ;
-(void)_loadAssetInspectorAndLoaderOnce;
-(id)_newTrackForIndex:(long long)arg1 ;
-(id)_mutableTracks;
-(BOOL)_clientProvidesNaturalSize;
-(void)_setNaturalSize:(CGSize)arg1 ;
-(BOOL)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2 ;
@end

