/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICDPDeviceListViewController : UITableViewController {
    id /* block */  _deviceSelectionCallback;
    NSArray * _devices;
    BOOL  _shouldShowCancelButton;
}

@property (nonatomic, copy) id /* block */ deviceSelectionCallback;
@property (nonatomic) BOOL shouldShowCancelButton;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id /* block */)deviceSelectionCallback;
- (id)initWithDevices:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDeviceSelectionCallback:(id /* block */)arg1;
- (void)setShouldShowCancelButton:(BOOL)arg1;
- (BOOL)shouldShowCancelButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end
