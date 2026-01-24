#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkCustomDialogParam.h"
#include "HbkDialog_SpectraRoomCustomDelegateDelegate.h"
#include "HbkDialog_SpectraRoom.generated.h"

class UHbkDialog_SpectraRoom;
class UObject;

UCLASS(Blueprintable)
class UHbkDialog_SpectraRoom : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_SpectraRoomCustomDelegate YesOrAccept;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_SpectraRoomCustomDelegate NoOrCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_SpectraRoomCustomDelegate Continue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_SpectraRoomCustomDelegate CustomButton;
    
    UHbkDialog_SpectraRoom();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkDialog_SpectraRoom* SpectraRoom_Dialog(UObject* WorldContextObject, const FHbkCustomDialogParam& CustomDialogParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPushedCustom4();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedCustom3();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedCustom2();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedCustom1();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedButton2();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedButton1();
    
};

