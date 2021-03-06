/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWParameters : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_parameters> * _internalParameters;
}

@property (copy) NSSet *SSLCipherSuites;
@property (copy) NSData *TLSSessionID;
@property (copy) NSString *account;
@property BOOL allowPowerNap;
@property BOOL connectedByLaunchOnDemand;
@property BOOL connectedBySocket;
@property int dataProtectionClass;
@property BOOL disableNagleAlgorithm;
@property unsigned long long duration;
@property (copy) NSString *effectiveBundleID;
@property (copy) NSUUID *effectiveProcessUUID;
@property BOOL enableExtendedBackgroundIdle;
@property BOOL enableTFO;
@property BOOL enableTLS;
@property BOOL indefinite;
@property (retain) NSObject<OS_nw_parameters> *internalParameters;
@property unsigned short ipProtocol;
@property (readonly) BOOL isConditionalConnection;
@property unsigned long long launchOnDemandJob;
@property (retain) NSString *launchOnDemandLabel;
@property (retain) NSObject<OS_xpc_object> *ledbellyEndpoints;
@property long long ledbellyID;
@property (retain) NWAddressEndpoint *localAddress;
@property unsigned int maximumSSLProtocolVersion;
@property unsigned int minimumSSLProtocolVersion;
@property BOOL multipath;
@property BOOL noProxy;
@property (getter=isPassive) BOOL passive;
@property BOOL passiveConditionalConnection;
@property BOOL persistent;
@property int pid;
@property (retain) NSString *poolName;
@property long long poolPriority;
@property (readonly, copy) NSString *privateDescription;
@property (copy) NSUUID *processUUID;
@property (readonly) BOOL prohibitCellular;
@property BOOL prohibitExpensivePaths;
@property BOOL prohibitFallback;
@property (copy) NSDictionary *proxyConfiguration;
@property BOOL reduceBuffering;
@property BOOL requirePower;
@property unsigned char requiredAddressFamily;
@property (readonly) NSString *requiredCellularService;
@property (retain) NWInterface *requiredInterface;
@property int requiredInterfaceType;
@property BOOL resolvePTR;
@property BOOL reuseLocalAddress;
@property unsigned long long startTime;
@property unsigned int trafficClass;
@property unsigned int uid;
@property (copy) NSURL *url;
@property BOOL useAWDL;
@property BOOL useDUET;
@property BOOL useLongOutstandingQueries;
@property BOOL useP2P;
@property (getter=isValid, readonly) BOOL valid;
@property unsigned long long workload;

- (void).cxx_destruct;
- (id)SSLCipherSuites;
- (id)TLSSessionID;
- (id)account;
- (BOOL)allowPowerNap;
- (BOOL)connectedByLaunchOnDemand;
- (BOOL)connectedBySocket;
- (BOOL)copyEffectiveAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (id)copyStrippedParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataProtectionClass;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (BOOL)disableNagleAlgorithm;
- (unsigned long long)duration;
- (id)effectiveBundleID;
- (id)effectiveProcessUUID;
- (BOOL)enableExtendedBackgroundIdle;
- (BOOL)enableTFO;
- (BOOL)enableTLS;
- (BOOL)hasDelegatedPIDForOriginatingPID:(int)arg1;
- (BOOL)hasDelegatedProcessUUID;
- (BOOL)hasProhibitedNetworkAgents;
- (BOOL)hasRequiredNetworkAgents;
- (BOOL)indefinite;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)internalParameters;
- (unsigned short)ipProtocol;
- (BOOL)isConditionalConnection;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPassive;
- (BOOL)isValid;
- (unsigned long long)launchOnDemandJob;
- (id)launchOnDemandLabel;
- (id)ledbellyEndpoints;
- (long long)ledbellyID;
- (id)localAddress;
- (unsigned int)maximumSSLProtocolVersion;
- (unsigned int)minimumSSLProtocolVersion;
- (BOOL)multipath;
- (BOOL)noProxy;
- (BOOL)passiveConditionalConnection;
- (BOOL)persistent;
- (int)pid;
- (id)poolName;
- (long long)poolPriority;
- (id)privateDescription;
- (id)processUUID;
- (BOOL)prohibitCellular;
- (BOOL)prohibitExpensivePaths;
- (BOOL)prohibitFallback;
- (void)prohibitInterface:(id)arg1;
- (void)prohibitInterfaceSubtype:(int)arg1;
- (void)prohibitInterfaceType:(int)arg1;
- (void)prohibitNetworkAgentWithUUID:(id)arg1;
- (void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (id)proxyConfiguration;
- (BOOL)reduceBuffering;
- (void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)requireNetworkAgentWithUUID:(id)arg1;
- (BOOL)requirePower;
- (unsigned char)requiredAddressFamily;
- (id)requiredCellularService;
- (id)requiredInterface;
- (int)requiredInterfaceType;
- (BOOL)resolvePTR;
- (BOOL)reuseLocalAddress;
- (void)setAccount:(id)arg1;
- (void)setAllowPowerNap:(BOOL)arg1;
- (void)setConnectedByLaunchOnDemand:(BOOL)arg1;
- (void)setConnectedBySocket:(BOOL)arg1;
- (void)setDataProtectionClass:(int)arg1;
- (void)setDisableNagleAlgorithm:(BOOL)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEffectiveBundleID:(id)arg1;
- (void)setEffectiveProcessUUID:(id)arg1;
- (void)setEnableExtendedBackgroundIdle:(BOOL)arg1;
- (void)setEnableTFO:(BOOL)arg1;
- (void)setEnableTLS:(BOOL)arg1;
- (void)setIndefinite:(BOOL)arg1;
- (void)setInternalParameters:(id)arg1;
- (void)setIpProtocol:(unsigned short)arg1;
- (void)setLaunchOnDemandJob:(unsigned long long)arg1;
- (void)setLaunchOnDemandLabel:(id)arg1;
- (void)setLedbellyEndpoints:(id)arg1;
- (void)setLedbellyID:(long long)arg1;
- (void)setLocalAddress:(id)arg1;
- (void)setMaximumSSLProtocolVersion:(unsigned int)arg1;
- (void)setMinimumSSLProtocolVersion:(unsigned int)arg1;
- (void)setMultipath:(BOOL)arg1;
- (void)setNoProxy:(BOOL)arg1;
- (void)setPassive:(BOOL)arg1;
- (void)setPassiveConditionalConnection:(BOOL)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setPid:(int)arg1;
- (void)setPoolName:(id)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setProcessUUID:(id)arg1;
- (void)setProhibitExpensivePaths:(BOOL)arg1;
- (void)setProhibitFallback:(BOOL)arg1;
- (void)setProxyConfiguration:(id)arg1;
- (void)setReduceBuffering:(BOOL)arg1;
- (void)setRequirePower:(BOOL)arg1;
- (void)setRequiredAddressFamily:(unsigned char)arg1;
- (void)setRequiredInterface:(id)arg1;
- (void)setRequiredInterfaceType:(int)arg1;
- (void)setResolvePTR:(BOOL)arg1;
- (void)setReuseLocalAddress:(BOOL)arg1;
- (void)setSSLCipherSuites:(id)arg1;
- (void)setSourceApplicationWithBundleID:(id)arg1;
- (void)setSourceApplicationWithToken:(struct { unsigned int x1[8]; })arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTLSSessionID:(id)arg1;
- (void)setTrafficClass:(unsigned int)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseAWDL:(BOOL)arg1;
- (void)setUseDUET:(BOOL)arg1;
- (void)setUseLongOutstandingQueries:(BOOL)arg1;
- (void)setUseP2P:(BOOL)arg1;
- (void)setWorkload:(unsigned long long)arg1;
- (int)sslProtocolWithTLSVersion:(unsigned short)arg1;
- (unsigned long long)startTime;
- (unsigned short)tlsVersionWithSSLProtocol:(int)arg1;
- (unsigned int)trafficClass;
- (unsigned int)uid;
- (id)url;
- (BOOL)useAWDL;
- (BOOL)useDUET;
- (BOOL)useLongOutstandingQueries;
- (BOOL)useP2P;
- (unsigned long long)workload;

@end
