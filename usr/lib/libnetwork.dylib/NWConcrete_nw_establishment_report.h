/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_nw_establishment_report.h>

@protocol OS_nw_endpoint, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_establishment_report : NSObject <OS_nw_establishment_report> {

	unsigned long long attempt_started_after_milliseconds;
	unsigned long long duration_milliseconds;
	unsigned long long resolution_started_after_milliseconds;
	unsigned long long flow_started_after_milliseconds;
	NSObject*<OS_nw_endpoint> proxy_endpoint;
	NSObject*<OS_nw_array> protocol_reports;
	NSObject*<OS_nw_array> resolution_reports;
	unsigned previous_attempt_count;
	unsigned proxy_configured : 1;
	unsigned used_proxy : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
@end

