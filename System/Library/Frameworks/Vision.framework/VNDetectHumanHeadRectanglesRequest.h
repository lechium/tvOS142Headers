/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end

