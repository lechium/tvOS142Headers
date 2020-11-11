/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * buildVersion; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * hardwareType; 
@property (nonatomic,retain) NSString * installError; 
@property (assign,nonatomic) unsigned long long installStatus; 
@property (assign,nonatomic) unsigned long long installType; 
@property (assign,nonatomic) long long jobID; 
+(unsigned long long)_installStatusForString:(id)arg1 ;
+(unsigned long long)_installTypeForString:(id)arg1 ;
+(id)_stringForInstallStatus:(unsigned long long)arg1 ;
+(id)_stringForInstallType:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)hardwareType;
-(void)setHardwareType:(NSString *)arg1 ;
-(unsigned long long)installType;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(NSString *)installError;
-(unsigned long long)installStatus;
-(long long)jobID;
-(void)setInstallError:(NSString *)arg1 ;
-(void)setInstallStatus:(unsigned long long)arg1 ;
-(void)setJobID:(long long)arg1 ;
@end

