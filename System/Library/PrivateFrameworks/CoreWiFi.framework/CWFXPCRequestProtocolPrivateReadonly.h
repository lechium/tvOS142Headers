/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CWFXPCRequestProtocolPrivateReadonly
@required
-(void)cancelRequestsWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringAllEventsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEventIDsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNamesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryVirtualInterfaceNamesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryKnownNetworkProfilesWithProperties:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryKnownNetworkProfileMatchingNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryKnownNetworkProfileMatchingScanResult:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryThermalIndexWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRSSIWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNoiseWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxRateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceCapabilitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNumberOfSpatialStreamsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMCSIndexWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySecurityWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWEPSubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWAPISubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedChannelsWithCountryCode:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryChannelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedPHYModesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPHYModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCountryCodeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDForVendorWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDForVendorWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryOpModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryParentInterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryVirtualInterfaceRoleWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCurrentScanResultWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCurrentKnownNetworkProfileWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMACAddressWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkServiceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkServiceIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIsNetworkServiceEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDNSServerAddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDHCPLeaseStartTimeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDHCPLeaseExpirationTimeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4InterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4NetworkServiceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv4NetworkServiceIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6InterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6NetworkServiceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6NetworkServiceIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6AddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalIPv6RouterWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGlobalDNSServerAddressesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkReachabilityWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XSupplicantStateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XControlModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XControlStateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XClientStatusWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRangingCapabilitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryLinkQualityMetricWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;

@end

