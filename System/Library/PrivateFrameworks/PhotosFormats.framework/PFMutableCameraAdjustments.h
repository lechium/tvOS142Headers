/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFCameraAdjustments.h>

@class NSString, AVApplePortraitMetadata;

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (nonatomic,copy) NSString * effectFilterName; 
@property (nonatomic,copy) NSString * portraitEffectFilterName; 
@property (nonatomic,retain) AVApplePortraitMetadata * portraitMetadata; 
@property (assign,getter=isDepthEnabled,nonatomic) BOOL depthEnabled; 
@property (assign,nonatomic) CGRect cropRect; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setEffectFilterName:(NSString *)arg1 ;
-(void)setPortraitEffectFilterName:(NSString *)arg1 ;
-(void)setPortraitMetadata:(AVApplePortraitMetadata *)arg1 ;
-(void)setDepthEnabled:(BOOL)arg1 ;
@end

