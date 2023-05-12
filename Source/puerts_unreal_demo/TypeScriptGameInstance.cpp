// Fill out your copyright notice in the Description page of Project Settings.


#include "TypeScriptGameInstance.h"

void UTypeScriptGameInstance::OnStart()
{
    Super::OnStart();
    StartNotify.ExecuteIfBound();
}

void UTypeScriptGameInstance::Shutdown()
{
    Supuer::Shutdown();
    ShutdownNotify.ExecuteIfBound();
}
