/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSString, PXNoContentGadgetView;

@interface PXNoContentGadget : NSObject <PXGadget> {

	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	NSString* _title;
	NSString* _message;
	double _contentHeightAdjustment;
	PXNoContentGadgetView* _noContentView;
	double _minimumContentHeight;

}

@property (nonatomic,retain) PXNoContentGadgetView * noContentView;                 //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,readonly) double minimumContentHeight;                         //@synthesize minimumContentHeight=_minimumContentHeight - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) double contentHeightAdjustment;                        //@synthesize contentHeightAdjustment=_contentHeightAdjustment - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)hasLoadedContentData;
-(unsigned long long)gadgetType;
-(void)prepareCollectionViewItem:(id)arg1 ;
-(unsigned long long)accessoryButtonType;
-(Class)collectionViewItemClass;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 ;
-(void)setContentHeightAdjustment:(double)arg1 ;
-(double)contentHeightAdjustment;
-(void)configureWithButtonTitle:(id)arg1 buttonAction:(/*^block*/id)arg2 ;
-(double)preferredHeightForViewController:(id)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 minimumContentHeight:(double)arg3 ;
-(PXNoContentGadgetView *)noContentView;
-(void)setNoContentView:(PXNoContentGadgetView *)arg1 ;
-(double)minimumContentHeight;
@end

