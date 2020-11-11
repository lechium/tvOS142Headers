/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKitSource/MXSourceData.h>

@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;

@interface MXSpinTracerData : MXSourceData {

	MXCPUExceptionDiagnostic* _cpuExceptionDiagnostic;
	MXDiskWriteExceptionDiagnostic* _diskWriteExceptionDiagnostic;

}

@property (retain) MXCPUExceptionDiagnostic * cpuExceptionDiagnostic;                          //@synthesize cpuExceptionDiagnostic=_cpuExceptionDiagnostic - In the implementation block
@property (retain) MXDiskWriteExceptionDiagnostic * diskWriteExceptionDiagnostic;              //@synthesize diskWriteExceptionDiagnostic=_diskWriteExceptionDiagnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXCPUExceptionDiagnostic *)cpuExceptionDiagnostic;
-(MXDiskWriteExceptionDiagnostic *)diskWriteExceptionDiagnostic;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(void)setCpuExceptionDiagnostic:(MXCPUExceptionDiagnostic *)arg1 ;
-(void)setDiskWriteExceptionDiagnostic:(MXDiskWriteExceptionDiagnostic *)arg1 ;
@end
