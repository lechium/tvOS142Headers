/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXProtoMutableFeatureView <NSObject>
@property (nonatomic,retain) id<PXProtoFeature> feature; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@required
-(void)setSelected:(BOOL)arg1;
-(BOOL)isSelected;
-(id<PXProtoFeature>)feature;
-(void)setDisabled:(BOOL)arg1;
-(void)setFeature:(id)arg1;
-(BOOL)isDisabled;

@end

