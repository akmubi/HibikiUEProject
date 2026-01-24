#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpecialAttackObj_350.generated.h"

class UHbkSimpleDisplayWidget;
class UHbkUserWidget;

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObj_350 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSimpleDisplayWidget> ShutterWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkUserWidget> OutFrameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkSimpleDisplayWidget* ShutterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkUserWidget* OutFrameWidget;
    
public:
    AHbkPlayerSpecialAttackObj_350(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOpenShutter();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedShutter();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseShutter();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginFinishCamera();
    
};

