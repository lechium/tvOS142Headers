/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXAssetVariationsSettings : PXSettings {

	BOOL _addSimulatedProgressComponent;
	BOOL _simulateLoadingFailure;
	BOOL _simulateSavingFailure;
	BOOL _useNeutrinoRendering;
	BOOL _showStatusInDisclosureLabel;
	BOOL _showLoopBadges;
	BOOL _invalidateCachedPreviews;
	BOOL _useLiveRenderedPreviews;
	double _selectionDetailsDismissalDelay;
	long long _suggestionsScheme;
	long long _layoutStyle;

}

@property (assign,nonatomic) double selectionDetailsDismissalDelay;              //@synthesize selectionDetailsDismissalDelay=_selectionDetailsDismissalDelay - In the implementation block
@property (assign,nonatomic) long long suggestionsScheme;                        //@synthesize suggestionsScheme=_suggestionsScheme - In the implementation block
@property (assign,nonatomic) BOOL addSimulatedProgressComponent;                 //@synthesize addSimulatedProgressComponent=_addSimulatedProgressComponent - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL simulateLoadingFailure;                        //@synthesize simulateLoadingFailure=_simulateLoadingFailure - In the implementation block
@property (assign,nonatomic) BOOL simulateSavingFailure;                         //@synthesize simulateSavingFailure=_simulateSavingFailure - In the implementation block
@property (assign,nonatomic) BOOL useNeutrinoRendering;                          //@synthesize useNeutrinoRendering=_useNeutrinoRendering - In the implementation block
@property (assign,nonatomic) BOOL showStatusInDisclosureLabel;                   //@synthesize showStatusInDisclosureLabel=_showStatusInDisclosureLabel - In the implementation block
@property (assign,nonatomic) BOOL showLoopBadges;                                //@synthesize showLoopBadges=_showLoopBadges - In the implementation block
@property (assign,nonatomic) BOOL invalidateCachedPreviews;                      //@synthesize invalidateCachedPreviews=_invalidateCachedPreviews - In the implementation block
@property (assign,nonatomic) BOOL useLiveRenderedPreviews;                       //@synthesize useLiveRenderedPreviews=_useLiveRenderedPreviews - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)selectionDetailsDismissalDelay;
-(void)setSelectionDetailsDismissalDelay:(double)arg1 ;
-(long long)suggestionsScheme;
-(void)setSuggestionsScheme:(long long)arg1 ;
-(BOOL)addSimulatedProgressComponent;
-(void)setAddSimulatedProgressComponent:(BOOL)arg1 ;
-(BOOL)simulateLoadingFailure;
-(void)setSimulateLoadingFailure:(BOOL)arg1 ;
-(BOOL)simulateSavingFailure;
-(void)setSimulateSavingFailure:(BOOL)arg1 ;
-(BOOL)useNeutrinoRendering;
-(void)setUseNeutrinoRendering:(BOOL)arg1 ;
-(BOOL)showStatusInDisclosureLabel;
-(void)setShowStatusInDisclosureLabel:(BOOL)arg1 ;
-(BOOL)showLoopBadges;
-(void)setShowLoopBadges:(BOOL)arg1 ;
-(BOOL)invalidateCachedPreviews;
-(void)setInvalidateCachedPreviews:(BOOL)arg1 ;
-(BOOL)useLiveRenderedPreviews;
-(void)setUseLiveRenderedPreviews:(BOOL)arg1 ;
@end

