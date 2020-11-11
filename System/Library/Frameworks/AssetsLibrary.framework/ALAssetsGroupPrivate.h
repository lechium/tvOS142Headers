/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@protocol PLAlbumProtocol;
@class ALAssetsLibrary, NSObject, ALAssetsFilter, NSMutableDictionary, PLPhotoLibrary, NSString;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {

	BOOL _loadedAssets;
	ALAssetsLibrary* _library;
	BOOL _isValid;
	BOOL _isCloudSharedGroup;
	BOOL _applyHyperionFilter;
	NSObject*<PLAlbumProtocol> _album;
	ALAssetsFilter* _assetsFilter;
	unsigned long long _groupType;
	NSMutableDictionary* _propertyValues;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) NSMutableDictionary * propertyValues;              //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album;                  //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL isCloudSharedGroup;                           //@synthesize isCloudSharedGroup=_isCloudSharedGroup - In the implementation block
@property (assign,nonatomic) BOOL applyHyperionFilter;                          //@synthesize applyHyperionFilter=_applyHyperionFilter - In the implementation block
@property (nonatomic,retain) ALAssetsFilter * assetsFilter;                     //@synthesize assetsFilter=_assetsFilter - In the implementation block
@property (assign,nonatomic) unsigned long long groupType;                      //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                      //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isValid;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(ALAssetsLibrary *)library;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(NSObject*<PLAlbumProtocol>)album;
-(void)setIsValid:(BOOL)arg1 ;
-(NSMutableDictionary *)propertyValues;
-(unsigned long long)groupType;
-(void)setGroupType:(unsigned long long)arg1 ;
-(PLPhotoLibrary *)_photoLibrary;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)setAssetsFilter:(ALAssetsFilter *)arg1 ;
-(void)libraryDidChange;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(id)initWithAlbum:(id)arg1 library:(id)arg2 ;
-(int)albumFilter;
-(void)resetAssets;
-(void)updateAlbumFiltering;
-(void)populateAssets;
-(ALAssetsFilter *)assetsFilter;
-(void)setPropertyValues:(NSMutableDictionary *)arg1 ;
-(BOOL)isCloudSharedGroup;
-(void)setIsCloudSharedGroup:(BOOL)arg1 ;
-(BOOL)applyHyperionFilter;
-(void)setApplyHyperionFilter:(BOOL)arg1 ;
@end

