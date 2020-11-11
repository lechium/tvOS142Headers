/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXSectionedSelectionManager, NSSet;


@protocol PXMutablePhotosDetailsViewModel <NSObject>
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (assign,nonatomic) BOOL supportsSelection; 
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager; 
@property (assign,nonatomic) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,retain) NSSet * disabledActionTypes; 
@required
-(PXSectionedSelectionManager *)selectionManager;
-(BOOL)supportsSelection;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1;
-(void)setSelectionManager:(id)arg1;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(id)arg1;
-(void)setSupportsSelection:(BOOL)arg1;
-(void)setSupportsFaceMode:(BOOL)arg1;

@end

