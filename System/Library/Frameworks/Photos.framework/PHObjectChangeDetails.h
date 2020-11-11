/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHObject;

@interface PHObjectChangeDetails : NSObject {

	PHObject* _objectBeforeChanges;
	PHObject* _objectAfterChanges;
	BOOL _assetContentChanged;
	BOOL _assetCollectionTitlePropertiesChanged;

}

@property (nonatomic,readonly) BOOL assetCollectionTitlePropertiesChanged; 
@property (readonly) PHObject * objectBeforeChanges; 
@property (readonly) PHObject * objectAfterChanges; 
@property (readonly) BOOL assetContentChanged; 
@property (readonly) BOOL objectWasDeleted; 
-(id)description;
-(void)_calculateDiffs;
-(id)initWithPHObject:(id)arg1 ;
-(PHObject *)objectBeforeChanges;
-(PHObject *)objectAfterChanges;
-(BOOL)assetContentChanged;
-(BOOL)assetCollectionTitlePropertiesChanged;
-(BOOL)objectWasDeleted;
@end

