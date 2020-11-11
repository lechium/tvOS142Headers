/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreTelephonyClientDataDelegateInternal <NSObject>
@optional
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
-(void)preferredDataSimChanged:(id)arg1;
-(void)preferredDataServiceDescriptorChanged:(id)arg1;
-(void)currentDataSimChanged:(id)arg1;
-(void)currentDataServiceDescriptorChanged:(id)arg1;
-(void)servingNetworkChanged:(id)arg1;
-(void)connectionAvailability:(id)arg1 availableConnections:(id)arg2;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
-(void)dataSettingsChanged:(id)arg1;
-(void)internetConnectionStateChanged:(id)arg1;
-(void)internetConnectionActivationError:(int)arg1;
-(void)internetDataStatus:(id)arg1;
-(void)internetConnectionAvailability:(BOOL)arg1;
-(void)tetheringStatus:(id)arg1;
-(void)serviceDisconnection:(id)arg1 status:(id)arg2;

@end

