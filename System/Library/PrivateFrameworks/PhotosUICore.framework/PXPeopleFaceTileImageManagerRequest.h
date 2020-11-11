/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPerson, PHFace, PHAsset;

@interface PXPeopleFaceTileImageManagerRequest : NSObject {

	BOOL _synchronous;
	PHPerson* _person;
	PHFace* _face;
	PHAsset* _asset;
	long long _deliveryMode;

}

@property (nonatomic,retain) PHFace * face;                       //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) PHPerson * person;                 //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                   //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long deliveryMode;              //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) BOOL synchronous;                    //@synthesize synchronous=_synchronous - In the implementation block
-(id)description;
-(PHPerson *)person;
-(BOOL)synchronous;
-(void)setSynchronous:(BOOL)arg1 ;
-(PHFace *)face;
-(void)setFace:(PHFace *)arg1 ;
-(PHAsset *)asset;
-(id)initWithPerson:(id)arg1 ;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3 ;
-(id)initWithFaceTile:(id)arg1 ;
@end

