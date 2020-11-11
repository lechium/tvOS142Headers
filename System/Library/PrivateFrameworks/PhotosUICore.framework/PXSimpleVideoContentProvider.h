/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXVideoContentProvider.h>

@class PXVideoContentProviderLoadingResult, NSString;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {

	PXVideoContentProviderLoadingResult* _loadingResult;
	NSString* _contentIdentifier;
	double _loadingProgress;

}
-(id)description;
-(id)init;
-(id)contentIdentifier;
-(void)beginLoadingWithPriority:(long long)arg1 ;
-(double)loadingProgress;
-(id)initWithPlayerItem:(id)arg1 contentIdentifier:(id)arg2 ;
-(id)loadingResult;
-(void)setLoadingResult:(id)arg1 ;
-(void)setLoadingProgress:(double)arg1 ;
@end
