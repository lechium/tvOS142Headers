/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VNOperationPointsProviding.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {

	_VNImageAnalyzerMultiDetectorSceneOperationPointsCache* _operationPointsCache;
	unsigned long long _requestRevision;

}
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2 ;
@end

