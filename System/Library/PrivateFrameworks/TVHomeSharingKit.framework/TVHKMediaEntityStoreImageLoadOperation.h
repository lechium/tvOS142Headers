/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKImageLoadParamsOperation.h>

@class NSOperation;

@interface TVHKMediaEntityStoreImageLoadOperation : TVHKImageLoadParamsOperation {

	NSOperation* _currentSubOperation;

}

@property (nonatomic,retain) NSOperation * currentSubOperation;              //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
-(void)cancel;
-(void)executionDidBegin;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_mediaEntityImageLoadParams;
-(void)_startLookupOperation;
-(id)_templateImageURLStringFromLookupResults:(id)arg1 storeID:(id)arg2 ;
-(void)_startImageLoadOperationWithTemplateImageURLString:(id)arg1 ;
@end

