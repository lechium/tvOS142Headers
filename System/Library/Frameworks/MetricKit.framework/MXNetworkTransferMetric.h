/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXNetworkTransferMetric : MXMetric {

	NSMeasurement* _cumulativeWifiUpload;
	NSMeasurement* _cumulativeWifiDownload;
	NSMeasurement* _cumulativeCellularUpload;
	NSMeasurement* _cumulativeCellularDownload;

}

@property (readonly) NSMeasurement * cumulativeWifiUpload;                    //@synthesize cumulativeWifiUpload=_cumulativeWifiUpload - In the implementation block
@property (readonly) NSMeasurement * cumulativeWifiDownload;                  //@synthesize cumulativeWifiDownload=_cumulativeWifiDownload - In the implementation block
@property (readonly) NSMeasurement * cumulativeCellularUpload;                //@synthesize cumulativeCellularUpload=_cumulativeCellularUpload - In the implementation block
@property (readonly) NSMeasurement * cumulativeCellularDownload;              //@synthesize cumulativeCellularDownload=_cumulativeCellularDownload - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeWifiUploadMeasurement:(id)arg1 cumulativeWifiDownloadMeasurement:(id)arg2 cumulativeCellularUploadMeasurement:(id)arg3 cumulativeCellularDownloadMeasurement:(id)arg4 ;
-(NSMeasurement *)cumulativeWifiUpload;
-(NSMeasurement *)cumulativeWifiDownload;
-(NSMeasurement *)cumulativeCellularUpload;
-(NSMeasurement *)cumulativeCellularDownload;
@end

