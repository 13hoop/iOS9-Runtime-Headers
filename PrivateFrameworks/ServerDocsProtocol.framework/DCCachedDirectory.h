/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCCachedDirectory : DCCachedItem <DCCachedDirectory>

@property (readonly, retain) NSArray *contents;
@property (readonly, retain) NSArray *localItems;
@property (readonly, retain) DCPermissions *permissions;
@property (readonly, retain) NSDictionary *permissionsOffDisk;

+ (id)_contentsWithFixedConstantsFromContentsPropertyListData:(id)arg1;

- (id)_contentsFullPath;
- (id)_directoryPath;
- (id)_fileSystemMetadataWithoutNeedingLockingButNeedingCoordination;
- (id)_localGenerationIdentifier;
- (id)_localGenerationIdentifierFullPath;
- (id)_parentContentsMetadataForChildAtRelativePath:(id)arg1;
- (void)_savePermissionsOnDisk:(id)arg1 documentIdentifier:(id)arg2 versionIdentifier:(id)arg3 previousVersionIdentifier:(id)arg4;
- (id)contents;
- (id)localItems;
- (id)permissions;
- (id)permissionsOffDisk;

@end
