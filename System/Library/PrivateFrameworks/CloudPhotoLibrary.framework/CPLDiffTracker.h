/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSSet;

@interface CPLDiffTracker : NSObject {

	NSMutableSet* _differingProperties;
	BOOL _shouldCompareAllProperties;
	BOOL _objectsAreTotallyDifferent;

}

@property (assign,nonatomic) BOOL shouldCompareAllProperties;                //@synthesize shouldCompareAllProperties=_shouldCompareAllProperties - In the implementation block
@property (nonatomic,readonly) BOOL objectsAreTotallyDifferent;              //@synthesize objectsAreTotallyDifferent=_objectsAreTotallyDifferent - In the implementation block
@property (nonatomic,readonly) NSSet * differingProperties;                  //@synthesize differingProperties=_differingProperties - In the implementation block
-(id)description;
-(id)redactedDescription;
-(void)noteObjectAreTotallyDifferent;
-(void)noteObjectsDifferOnProperty:(id)arg1 ;
-(BOOL)areObjectsDifferentOnProperty:(id)arg1 ;
-(BOOL)shouldCompareAllProperties;
-(void)setShouldCompareAllProperties:(BOOL)arg1 ;
-(BOOL)objectsAreTotallyDifferent;
-(NSSet *)differingProperties;
@end

