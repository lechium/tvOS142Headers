/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGAXResponder <NSObject>
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder; 
@required
-(id<PXGAXResponder>)axNextResponder;
-(void)setAxNextResponder:(id)arg1;
-(id)axContainingViewForAXGroup:(id)arg1;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;

@end
