/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, PXTilingLayout, NSArray;

@interface PXTilingChange : NSObject {

	NSMutableArray* _events;
	PXTilingLayout* _initialLayout;
	NSArray* _compositionInvalidationContexts;
	CGSize _initialReferenceSize;
	UIEdgeInsets _initialContentInset;

}

@property (getter=isIdentity,nonatomic,readonly) BOOL identity; 
@property (nonatomic,readonly) PXTilingLayout * initialLayout;                              //@synthesize initialLayout=_initialLayout - In the implementation block
@property (nonatomic,readonly) CGSize initialReferenceSize;                                 //@synthesize initialReferenceSize=_initialReferenceSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets initialContentInset;                            //@synthesize initialContentInset=_initialContentInset - In the implementation block
@property (nonatomic,readonly) NSArray * events; 
@property (nonatomic,copy,readonly) NSArray * compositionInvalidationContexts;              //@synthesize compositionInvalidationContexts=_compositionInvalidationContexts - In the implementation block
@property (nonatomic,readonly) PXTilingLayout * fromLayout; 
@property (nonatomic,readonly) PXTilingLayout * toLayout; 
@property (nonatomic,readonly) CGSize fromReferenceSize; 
@property (nonatomic,readonly) CGSize toReferenceSize; 
@property (nonatomic,readonly) UIEdgeInsets fromContentInset; 
@property (nonatomic,readonly) UIEdgeInsets toContentInset; 
@property (nonatomic,readonly) BOOL coordinateSpaceDidChange; 
@property (nonatomic,readonly) NSArray * invalidationContexts; 
-(id)description;
-(id)init;
-(BOOL)isIdentity;
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
-(NSArray *)compositionInvalidationContexts;
-(PXTilingLayout *)initialLayout;
-(void)recordLayout:(id)arg1 ;
-(void)recordReferenceSize:(CGSize)arg1 ;
-(void)recordContentInset:(UIEdgeInsets)arg1 ;
-(void)recordCompositionInvalidationContexts:(id)arg1 ;
-(PXTilingLayout *)fromLayout;
-(PXTilingLayout *)toLayout;
-(CGSize)fromReferenceSize;
-(CGSize)toReferenceSize;
-(UIEdgeInsets)fromContentInset;
-(UIEdgeInsets)toContentInset;
-(BOOL)coordinateSpaceDidChange;
-(id)defaultAnimationOptionsForTilingController:(id)arg1 ;
-(NSArray *)invalidationContexts;
-(CGSize)initialReferenceSize;
-(UIEdgeInsets)initialContentInset;
@end
