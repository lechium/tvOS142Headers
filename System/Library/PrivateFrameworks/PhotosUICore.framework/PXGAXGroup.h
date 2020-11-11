/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol PXGAXGroup <PXGAXElement>
@property (nonatomic,readonly) id<PXGAXGroupSource> axGroupSource; 
@property (nonatomic,readonly) id<PXGAXInfoSource> axInfoSource; 
@property (nonatomic,readonly) id<PXGAXResponder> axNextResponder; 
@property (nonatomic,readonly) long long axRole; 
@property (nonatomic,readonly) id<PXGAXGroup> axParent; 
@property (nonatomic,readonly) NSArray * axSubgroups; 
@property (nonatomic,readonly) NSArray * axLeafs; 
@required
-(id<PXGAXResponder>)axNextResponder;
-(id<PXGAXGroupSource>)axGroupSource;
-(id<PXGAXInfoSource>)axInfoSource;
-(long long)axRole;
-(id<PXGAXGroup>)axParent;
-(NSArray *)axSubgroups;
-(NSArray *)axLeafs;

@end

