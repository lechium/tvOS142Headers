/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAnimationDelegate.h>

@class NSDictionary, PXCuratedLibraryLayout, NSString;

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject <PXGAnimationDelegate> {

	BOOL _wantsPresentationAdjustment;
	BOOL _wantsAnimationWithSpriteTransfer;
	NSDictionary* _userData;
	PXCuratedLibraryLayout* _layout;

}

@property (nonatomic,retain) NSDictionary * userData;                              //@synthesize userData=_userData - In the implementation block
@property (__weak,readonly) PXCuratedLibraryLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) long long animationCurve; 
@property (nonatomic,readonly) double animationDuration; 
@property (nonatomic,readonly) BOOL wantsDoubleSidedAnimations; 
@property (nonatomic,readonly) BOOL wantsPresentationAdjustment;                   //@synthesize wantsPresentationAdjustment=_wantsPresentationAdjustment - In the implementation block
@property (nonatomic,readonly) BOOL wantsAnimationWithSpriteTransfer;              //@synthesize wantsAnimationWithSpriteTransfer=_wantsAnimationWithSpriteTransfer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createAnimationIfNeededForLayout:(id)arg1 context:(long long)arg2 userData:(id)arg3 ;
+(id)createTransitionIfNeededForLayout:(id)arg1 context:(long long)arg2 ;
-(id)init;
-(PXCuratedLibraryLayout *)layout;
-(double)animationDuration;
-(id)initWithLayout:(id)arg1 ;
-(void)setUserData:(NSDictionary *)arg1 ;
-(NSDictionary *)userData;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(long long)animationCurve;
-(BOOL)wantsDoubleSidedAnimations;
-(BOOL)wantsPresentationAdjustment;
-(BOOL)wantsAnimationWithSpriteTransfer;
@end

