/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXReusableObjectPoolDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableDictionary;

@interface PXReusableObjectPool : NSObject {

	struct {
		BOOL respondsToDidCreateReusableObject;
		BOOL respondsToObjectBecameReusable;
		BOOL respondsToObjectPreparedForReuse;
	}  _delegateFlags;
	id<PXReusableObjectPoolDelegate> _delegate;
	NSMutableDictionary* __objectCreationBlocksByReuseIdentifier;
	NSMutableDictionary* __reusableObjectsByReuseIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _objectCreationBlocksByReuseIdentifier;              //@synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _reusableObjectsByReuseIdentifier;                   //@synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXReusableObjectPoolDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PXReusableObjectPoolDelegate>)delegate;
-(void)setDelegate:(id<PXReusableObjectPoolDelegate>)arg1 ;
-(void)registerReusableObjectForReuseIdentifier:(long long)arg1 creationHandler:(/*^block*/id)arg2 ;
-(id)checkOutReusableObjectWithReuseIdentifier:(long long)arg1 ;
-(void)checkInReusableObject:(id)arg1 ;
-(NSMutableDictionary *)_objectCreationBlocksByReuseIdentifier;
-(NSMutableDictionary *)_reusableObjectsByReuseIdentifier;
@end
