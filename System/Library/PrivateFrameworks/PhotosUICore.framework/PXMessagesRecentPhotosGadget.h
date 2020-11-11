/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXPhotoLibraryPresenting;
@class PXGadgetSpec, UIViewController, NSString;

@interface PXMessagesRecentPhotosGadget : NSObject <PXGadget> {

	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	UIViewController*<PXPhotoLibraryPresenting> _recentPhotosViewController;
	double _preferredHeight;

}

@property (nonatomic,retain) UIViewController*<PXPhotoLibraryPresenting> recentPhotosViewController;              //@synthesize recentPhotosViewController=_recentPhotosViewController - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                                              //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                           //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)localizedTitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)preferredHeight;
-(id)contentViewController;
-(unsigned long long)gadgetType;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(unsigned long long)accessoryButtonType;
-(NSString *)accessoryButtonTitle;
-(unsigned long long)headerStyle;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
-(UIViewController*<PXPhotoLibraryPresenting>)recentPhotosViewController;
-(void)setRecentPhotosViewController:(UIViewController*<PXPhotoLibraryPresenting>)arg1 ;
-(void)_updateViewControllerInsets;
@end

