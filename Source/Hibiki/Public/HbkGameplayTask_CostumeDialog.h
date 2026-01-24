#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_CostumeDialog.generated.h"

class UHbkGameplayTask_CostumeDialog;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_CostumeDialog : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskCostumeDialogDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskCostumeDialogDelegate OnClosed;
    
    UHbkGameplayTask_CostumeDialog(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_CostumeDialog* OpenCostumeDialog(UObject* WorldContextObject);
    
};

